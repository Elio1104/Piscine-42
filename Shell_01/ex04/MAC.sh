#!/bin/sh
ifconfig -a | grep -oE '(..:){5}..'

