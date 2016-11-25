#!/bin/sh


ip route add 172.16.2.176/28 via 172.16.2.156 dev eth1  #-->LAN4
ip addr add 172.16.2.1/28 dev tun0
