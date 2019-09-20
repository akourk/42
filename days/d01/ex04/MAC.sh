#!/bin/bash

ifconfig | grep ether | grep -v media | sed 's/	ether //g' | tr -d ' '
