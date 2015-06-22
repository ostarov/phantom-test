var fs = require('fs');
var page = require('webpage').create();
// Settings for real browser
page.settings.userAgent = 'Mozilla/5.0 (Windows NT 6.1; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/37.0.2062.120 Safari/537.36';
page.viewportSize = {width: 1600, height: 1200};

/*
// To log all requests
page.onResourceRequested = function(requestData, networkRequest) {
    console.log('Request (#' + requestData.id + '): ' + JSON.stringify(requestData));
};

page.onResourceReceived = function(response) {
    console.log('Response (#' + response.id + ', stage "' + response.stage + '"): ' + JSON.stringify(response));
};
*/

// Number of extensions already collected
var len = 0;

var count = function() {
    var exts = page.evaluate(function () {
        //return document.getElementsByClassName("a-d-na a-d webstore-test-wall-tile a-d-zc Xd dd");
        var arr = document.getElementsByClassName("a-d webstore-test-wall-tile a-d-zc a-P-d-k Xd dd");
        var res = []
        for (var i = 0; i < arr.length; ++i) {
            res.push(arr[i].outerHTML);
        }
        return res;
    });
    return exts;
}

var flag = 0;

var main = function() {    
    var exts = count();
    console.log('collected: ' + exts.length);
    
    // Saving results
    if (exts.length > len) {
        fs.write("extensions_accessibility.txt", exts.length + "\n", 'w');
        //fs.write("extensions.txt", exts.length + "\n", 'a');
        var x;
        for (x in exts) {
            fs.write("extensions_accessibility.txt", JSON.stringify(exts[x]) + "\n", 'a');
            //break;
        }
    }

    if (exts.length > len) {
        //page.render('store0.png');
        flag = 0;

        len = exts.length;

        // Different options to scroll
        //page.scrollPosition = {top: page.scrollPosition + 100, left: 0};
        var res = page.evaluate(function() {
            // Scrolls to the bottom of page
            //window.scrollTo(0, document.body.scrollHeight);
            window.document.body.scrollTop = document.body.scrollHeight;
            return window.document.body.scrollTop;
        });

        console.log('height: ' + res);
    }
    else {
        flag++;

        if (flag == 10) {
            page.render('store.png');
            phantom.exit();
        }
    }
}

page.onLoadFinished = function(status) {
    console.log('status: ' + status);
    //page.render('store.png');

    setInterval(main, 30000);    
};

page.open('https://chrome.google.com/webstore/category/ext/22-accessibility?_feature=free', function (status) {
//page.open('https://chrome.google.com/webstore/search/a?_feature=free&_category=extensions', function (status) {
//page.open('https://chrome.google.com/webstore/category/extensions?_feature=free', function (status) {
    if (status !== 'success') {
        console.log('Unable to access network');
        phantom.exit();
    }
});

