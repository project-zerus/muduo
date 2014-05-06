cc_library(
    name = 'pubsub',
    srcs = [
        'codec.cc',
        'hub.cc',
        'pub.cc',
        'pubsub.cc',
        'sub.cc',
    ],
    deps = '//essence/muduo:muduo'
)

cc_binary(
    name = 'pub',
    srcs = [
        'pub.cc',
    ],
    deps = ':pubsub'
)

cc_binary(
    name = 'sub',
    srcs = [
        'sub.cc',
    ],
    deps = ':pubsub'
)

cc_binary(
    name = 'hub',
    srcs = [
        'hub.cc',
    ],
    deps = ':pubsub'
)
