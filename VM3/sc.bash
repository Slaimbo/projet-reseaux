#!/bin/bash

apt-get install inetutils-inetd
update-inetd --add "echo stream tcp nowait nobody internal"
service inetutils-inetd stop
service inetutils-inetd start
apt-get install ipperf3