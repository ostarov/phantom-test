#configuration
CONFIG +=  static qpa no_mocdepend release qt_no_framework
host_build {
    QT_ARCH = x86_64
    QT_TARGET_ARCH = x86_64
} else {
    QT_ARCH = x86_64
    QMAKE_DEFAULT_LIBDIRS = /lib/x86_64-linux-gnu /lib /usr/lib/x86_64-linux-gnu /usr/lib /usr/lib/gcc/x86_64-linux-gnu/4.8
    QMAKE_DEFAULT_INCDIRS = /usr/include/c++/4.8 /usr/include/x86_64-linux-gnu/c++/4.8 /usr/include/c++/4.8/backward /usr/lib/gcc/x86_64-linux-gnu/4.8/include /usr/local/include /usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed /usr/include/x86_64-linux-gnu /usr/include
}
QT_CONFIG +=  minimal-config small-config medium-config large-config full-config no-pkg-config fontconfig xlib c++11 accessibility static qpa reduce_exports reduce_relocations clock-gettime clock-monotonic posix_fallocate mremap getaddrinfo ipv6ifname getifaddrs inotify eventfd system-jpeg jpeg system-png png gif system-freetype harfbuzz system-zlib iconv openssl-linked rpath icu concurrent audio-backend release

#versioning
QT_VERSION = 5.3.0
QT_MAJOR_VERSION = 5
QT_MINOR_VERSION = 3
QT_PATCH_VERSION = 0

#namespaces
QT_LIBINFIX = 
QT_NAMESPACE = 

QT_DEFAULT_QPA_PLUGIN = qphantom

QT_GCC_MAJOR_VERSION = 4
QT_GCC_MINOR_VERSION = 8
QT_GCC_PATCH_VERSION = 0
