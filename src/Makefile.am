lib_LTLIBRARIES = libmediactl.la libv4l2subdev.la
libmediactl_la_SOURCES = media.c
libv4l2subdev_la_SOURCES = subdev.c
mediactl_includedir=$(includedir)/mediactl
mediactl_include_HEADERS = media.h subdev.h

bin_PROGRAMS = media-ctl
media_ctl_SOURCES = main.c options.c options.h tools.h
media_ctl_LDADD = libmediactl.la libv4l2subdev.la

