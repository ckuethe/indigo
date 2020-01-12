/* gpsd_config.h generated by scons, do not hand-hack. */

#ifndef GPSD_CONFIG_H

#define VERSION "3.20"

#define GPSD_URL "https://gpsd.io/"

#if !defined(_POSIX_C_SOURCE)
#define _POSIX_C_SOURCE 200809L
#endif

#if !defined(_DEFAULT_SOURCE)
#define _DEFAULT_SOURCE
#endif

#if !defined(_BSD_SOURCE)
#define _BSD_SOURCE
#endif

#if !defined(_GNU_SOURCE)
#define _GNU_SOURCE 1
#endif

#define HAVE_LIBUSB 1

#define HAVE_LIBRT 1

/* #undef HAVE_LIBTHR */

#define HAVE_DBUS 0

#define ENABLE_BLUEZ 1

#define HAVE_LINUX_CAN_H 0

#define HAVE_STDATOMIC_H 1

#define HAVE_BUILTIN_ENDIANNESS 1

/* #undef HAVE_ENDIAN_H */

/* #undef HAVE_SYS_ENDIAN_H */

#define HAVE_ARPA_INET_H 1

#define HAVE_NETDB_H 1

#define HAVE_NETINET_IN_H 1

//#define HAVE_NETINET_IP_H 1

#define HAVE_SYS_SYSMACROS_H 1

#define HAVE_SYS_SOCKET_H 1

#define HAVE_SYS_UN_H 1

#define HAVE_SYSLOG_H 1

#define HAVE_TERMIOS_H 1

/* #undef HAVE_WINSOCK2_H */

#define SIZEOF_TIME_T 8

#define HAVE_CFMAKERAW 1

#define HAVE_CLOCK_GETTIME 1

#define HAVE_DAEMON 1

#define HAVE_FCNTL 1

#define HAVE_FORK 1

#define HAVE_GMTIME_R 1

#define HAVE_INET_NTOP 1

/* #undef HAVE_STRLCAT */

/* #undef HAVE_STRLCPY */

#define HAVE_STRPTIME 1

#define HAVE_SINCOS

#define HAVE_SYS_TIMEPPS_H 1

/* AIVDM support */
#define AIVDM_ENABLE 1

/* Ashtech support */
#define ASHTECH_ENABLE 1

/* application binaries directory */
#define BINDIR "bin"

/* BlueZ support for Bluetooth devices */
#define BLUEZ_ENABLE 1

/* client debugging support */
#define CLIENTDEBUG_ENABLE 1

/* control socket for hotplug notifications */
#define CONTROL_SOCKET_ENABLE 1

/* allow gpsctl/gpsmon to change device settings */
#define CONTROLSEND_ENABLE 1

/* build with code coveraging enabled */
/* #undef COVERAGING_ENABLE */

/* enable DBUS export support */
//#define DBUS_EXPORT_ENABLE 1

/* include debug information in build */
#define DEBUG_ENABLE 1

/* documents directory */
#define DOCDIR "share/doc"

/* DeLorme EarthMate Zodiac support */
#define EARTHMATE_ENABLE 1

/* EverMore binary support */
#define EVERMORE_ENABLE 1

/* force daemon to listen on all addressses */
/* #undef FORCE_GLOBAL_ENABLE */

/* Jackson Labs Fury and Firefly support */
#define FURY_ENABLE 1

/* San Jose Navigation FV-18 support */
#define FV18_ENABLE 1

/* Garmin kernel driver support */
#define GARMIN_ENABLE 1

/* Garmin Simple Text support */
#define GARMINTXT_ENABLE 1

/* Geostar Protocol support */
#define GEOSTAR_ENABLE 1

/* GPSClock support */
#define GPSCLOCK_ENABLE 1

/* gpsd itself */
#define GPSD_ENABLE 1

/* privilege revocation group */
#define GPSD_GROUP "uucp"

/* privilege revocation user */
#define GPSD_USER "nobody"

/* gspd client programs */
#define GPSDCLIENTS_ENABLE 1

/* Javad GREIS support */
#define GREIS_ENABLE 1

/* implicit linkage is supported in shared libs */
#define IMPLICIT_LINK_ENABLE 1

/* header file directory */
#define INCLUDEDIR "include"

/* Spectratime iSync LNRClok/GRCLOK support */
#define ISYNC_ENABLE 1

/* iTrax hardware support */
#define ITRAX_ENABLE 1

/* system libraries */
#define LIBDIR "lib"

/* build C++ bindings */
#define LIBGPSMM_ENABLE 1

/* special Linux PPS hack for Raspberry Pi et al */
#define MAGIC_HAT_ENABLE 1

/* build help in man and HTML formats */
#define MANBUILD_ENABLE 1

/* manual pages directory */
#define MANDIR "share/man"

/* maximum allowed clients */
#define MAX_CLIENTS 64

/* maximum allowed devices */
#define MAX_DEVICES 4

/* turn off every option not set on the command line */
/* #undef MINIMAL_ENABLE */

/* MTK-3301 support */
#define MTK3301_ENABLE 1

/* Navcom NCT support */
#define NAVCOM_ENABLE 1

/* build with ncurses */
#define NCURSES_ENABLE 1

/* build support for handling TCP/IP data sources */
#define NETFEED_ENABLE 1

/* NMEA0183 support */
#define NMEA0183_ENABLE 1

/* NMEA2000/CAN support */
#define NMEA2000_ENABLE 1

/* don't symbol-strip binaries at link time */
/* #undef NOSTRIP_ENABLE */

/* NTRIP support */
#define NTRIP_ENABLE 1

/* OceanServer support */
#define OCEANSERVER_ENABLE 1

/* Motorola OnCore chipset support */
#define ONCORE_ENABLE 1

/* Disciplined oscillator support */
#define OSCILLATOR_ENABLE 1

/* build support for passing through JSON */
#define PASSTHROUGH_ENABLE 1

/* pkgconfig file directory */
#define PKGCONFIG "lib/pkgconfig"

/* installation directory prefix */
#define PREFIX "/usr/local"

/* build with profiling enabled */
#define PROFILING_ENABLE 1

/* build Python support and modules. */
#define PYTHON_ENABLE 1

/* coverage command for Python progs */
#define PYTHON_COVERAGE "coverage run"

/* Python module directory prefix */
/* #undef PYTHON_LIBDIR */

/* build Qt bindings */
#define QT_ENABLE 1

/* version for versioned Qt */
#define QT_VERSIONED 5

/* allow gpsd to change device settings */
#define RECONFIGURE_ENABLE 1

/* rtcm104v2 support */
#define RTCM104V2_ENABLE 1

/* rtcm104v3 support */
#define RTCM104V3_ENABLE 1

/* system binaries directory */
#define SBINDIR "sbin"

/* build shared libraries, not static */
#define SHARED_ENABLE 1

/* export via shared memory */
#define SHM_EXPORT_ENABLE 1

/* SiRF chipset support */
#define SIRF_ENABLE 1

/* Skytraq chipset support */
#define SKYTRAQ_ENABLE 1

/* run tests with realistic (slow) delays */
/* #undef SLOW_ENABLE */

/* data export over sockets */
#define SOCKET_EXPORT_ENABLE 1

/* squelch gpsd_log/gpsd_hexdump to save cpu */
/* #undef SQUELCH_ENABLE */

/* Novatel SuperStarII chipset support */
#define SUPERSTAR2_ENABLE 1

/* system configuration directory */
#define SYSCONFDIR "etc"

/* cross-development system root */
/* #undef SYSROOT */

/* systemd socket activation */
#define SYSTEMD_ENABLE 1

/* cross-development target */
/* #undef TARGET */

/* target Python version as command */
#define TARGET_PYTHON "python"

/* time-service configuration */
/* #undef TIMESERVICE_ENABLE */

/* True North Technologies support */
#define TNT_ENABLE 1

/* DeLorme TripMate support */
#define TRIPMATE_ENABLE 1

/* Trimble TSIP support */
#define TSIP_ENABLE 1

/* u-blox Protocol support */
#define UBLOX_ENABLE 1

/* udev rules directory */
#define UDEVDIR "/lib/udev"

/* libusb support for USB devices */
#define USB_ENABLE 1

/* include xgps and xgpsspeed. */
#define XGPS_ENABLE 1

/* Magic device which, if present, means to grab a static /dev/pps0 for KPPS */
#define MAGIC_HAT_GPS   "/dev/ttyAMA0"
/* Generic device which, if present, means: */
/* to grab a static /dev/pps0 for KPPS */
#define MAGIC_LINK_GPS  "/dev/gpsd0"


#define GPSD_CONFIG_H
#endif /* GPSD_CONFIG_H */
