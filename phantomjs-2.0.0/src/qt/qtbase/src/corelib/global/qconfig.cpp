/* License Info */
static const char qt_configure_licensee_str          [256 + 12] = "qt_lcnsuser=Open Source";
static const char qt_configure_licensed_products_str [256 + 12] = "qt_lcnsprod=OpenSource";

/* Installation date */
static const char qt_configure_installation          [12+11]    = "qt_instdate=2015-06-15";

/* Installation Info */
static const char qt_configure_prefix_path_strs[][256 + 12] = {
#ifndef QT_BUILD_QMAKE
    "qt_prfxpath=/home/ostarov/extensions/phantomjs-2.0.0/src/qt/qtbase",
    "qt_docspath=/home/ostarov/extensions/phantomjs-2.0.0/src/qt/qtbase/doc",
    "qt_hdrspath=/home/ostarov/extensions/phantomjs-2.0.0/src/qt/qtbase/include",
    "qt_libspath=/home/ostarov/extensions/phantomjs-2.0.0/src/qt/qtbase/lib",
    "qt_lbexpath=/home/ostarov/extensions/phantomjs-2.0.0/src/qt/qtbase/libexec",
    "qt_binspath=/home/ostarov/extensions/phantomjs-2.0.0/src/qt/qtbase/bin",
    "qt_plugpath=/home/ostarov/extensions/phantomjs-2.0.0/src/qt/qtbase/plugins",
    "qt_impspath=/home/ostarov/extensions/phantomjs-2.0.0/src/qt/qtbase/imports",
    "qt_qml2path=/home/ostarov/extensions/phantomjs-2.0.0/src/qt/qtbase/qml",
    "qt_adatpath=/home/ostarov/extensions/phantomjs-2.0.0/src/qt/qtbase",
    "qt_datapath=/home/ostarov/extensions/phantomjs-2.0.0/src/qt/qtbase",
    "qt_trnspath=/home/ostarov/extensions/phantomjs-2.0.0/src/qt/qtbase/translations",
    "qt_xmplpath=/home/ostarov/extensions/phantomjs-2.0.0/src/qt/qtbase/examples",
    "qt_tstspath=/home/ostarov/extensions/phantomjs-2.0.0/src/qt/qtbase/tests",
#else
    "qt_prfxpath=/home/ostarov/extensions/phantomjs-2.0.0/src/qt/qtbase",
    "qt_docspath=/home/ostarov/extensions/phantomjs-2.0.0/src/qt/qtbase/doc",
    "qt_hdrspath=/home/ostarov/extensions/phantomjs-2.0.0/src/qt/qtbase/include",
    "qt_libspath=/home/ostarov/extensions/phantomjs-2.0.0/src/qt/qtbase/lib",
    "qt_lbexpath=/home/ostarov/extensions/phantomjs-2.0.0/src/qt/qtbase/libexec",
    "qt_binspath=/home/ostarov/extensions/phantomjs-2.0.0/src/qt/qtbase/bin",
    "qt_plugpath=/home/ostarov/extensions/phantomjs-2.0.0/src/qt/qtbase/plugins",
    "qt_impspath=/home/ostarov/extensions/phantomjs-2.0.0/src/qt/qtbase/imports",
    "qt_qml2path=/home/ostarov/extensions/phantomjs-2.0.0/src/qt/qtbase/qml",
    "qt_adatpath=/home/ostarov/extensions/phantomjs-2.0.0/src/qt/qtbase",
    "qt_datapath=/home/ostarov/extensions/phantomjs-2.0.0/src/qt/qtbase",
    "qt_trnspath=/home/ostarov/extensions/phantomjs-2.0.0/src/qt/qtbase/translations",
    "qt_xmplpath=/home/ostarov/extensions/phantomjs-2.0.0/src/qt/qtbase/examples",
    "qt_tstspath=/home/ostarov/extensions/phantomjs-2.0.0/src/qt/qtbase/tests",
    "qt_ssrtpath=",
    "qt_hpfxpath=/home/ostarov/extensions/phantomjs-2.0.0/src/qt/qtbase",
    "qt_hbinpath=/home/ostarov/extensions/phantomjs-2.0.0/src/qt/qtbase/bin",
    "qt_hlibpath=/home/ostarov/extensions/phantomjs-2.0.0/src/qt/qtbase/lib",
    "qt_hdatpath=/home/ostarov/extensions/phantomjs-2.0.0/src/qt/qtbase",
    "qt_targspec=linux-g++",
    "qt_hostspec=linux-g++",
#endif
};
static const char qt_configure_settings_path_str[256 + 12] = "qt_stngpath=/home/ostarov/extensions/phantomjs-2.0.0/src/qt/qtbase/etc/xdg";

#ifdef QT_BUILD_QMAKE
static const char qt_sysrootify_prefix[] = "qt_ssrtfpfx=y";
#endif

/* strlen( "qt_lcnsxxxx" ) == 12 */
#define QT_CONFIGURE_LICENSEE qt_configure_licensee_str + 12;
#define QT_CONFIGURE_LICENSED_PRODUCTS qt_configure_licensed_products_str + 12;

#define QT_CONFIGURE_SETTINGS_PATH qt_configure_settings_path_str + 12;
