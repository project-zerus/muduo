cc_library(
  name = 'libdiscard',
  srcs = [
    'discard/discard.cc',
  ],
  deps = '//essence/muduo:muduo'
)

cc_binary(
  name = 'simple_discard',
  srcs = [
    'discard/main.cc',
  ],
  deps = ':libdiscard'
)

cc_library(
  name = 'libecho',
  srcs = [
    'echo/echo.cc',
  ],
  deps = '//essence/muduo:muduo'
)

cc_binary(
  name = 'simple_echo',
  srcs = [
    'echo/main.cc',
  ],
  deps = ':libecho'
)

cc_library(
  name = 'libdaytime',
  srcs = [
    'daytime/daytime.cc',
  ],
  deps = '//essence/muduo:muduo'
)

cc_binary(
  name = 'simple_daytime',
  srcs = [
    'daytime/main.cc',
  ],
  deps = ':libdaytime'
)

cc_library(
  name = 'libtime',
  srcs = [
    'time/time.cc',
  ],
  deps = '//essence/muduo:muduo'
)

cc_binary(
  name = 'simple_time',
  srcs = [
    'time/main.cc',
  ],
  deps = ':libtime'
)

cc_binary(
  name = 'simple_timeclient',
  srcs = [
    'timeclient/timeclient.cc',
  ],
  deps = ':libtime'
)

cc_library(
  name = 'libchargen',
  srcs = [
    'chargen/chargen.cc',
  ],
  deps = '//essence/muduo:muduo'
)

cc_binary(
  name = 'simple_chargen',
  srcs = [
    'chargen/main.cc',
  ],
  deps = ':libchargen'
)

cc_binary(
  name = 'simple_chargenclient',
  srcs = [
    'chargenclient/chargenclient.cc',
  ],
  deps = ':libchargen'
)

cc_binary(
  name = 'simple_allinone',
  srcs = [
    'allinone/allinone.cc',
  ],
  deps = [
    ':libchargen',
    ':libdaytime',
    ':libdiscard',
    ':libecho',
    ':libtime',
  ]
)
