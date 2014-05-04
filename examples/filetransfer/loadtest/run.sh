#!/usr/bin/env sh

classpath=./release/library/*:./release/`basename ./release/loadtest*.jar`
mainClass="Client"

exec java \
-Xms4096m -Xmx4096m -XX:MaxPermSize=1024m -XX:ReservedCodeCacheSize=512m \
-classpath $classpath $mainClass $@
