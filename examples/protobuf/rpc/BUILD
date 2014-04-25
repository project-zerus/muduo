proto_library(
    name = 'sudoku_proto',
    srcs = 'sudoku.proto'
)

cc_binary(
    name = 'server',
    srcs = [
        'server.cc',
    ],
    deps = [
        ':sudoku_proto',
        '//essence/muduo:muduo',
    ]
)

cc_binary(
    name = 'client',
    srcs = [
        'client.cc',
    ],
    deps = [
        ':sudoku_proto',
        '//essence/muduo:muduo',
    ]
)
