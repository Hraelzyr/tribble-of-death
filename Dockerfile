FROM ubuntu:20.04

RUN apt update && apt install -y gcc-7 g++-7 gcc-7-multilib g++-7-multilib make ed

COPY . /home

WORKDIR /home/nachos-project
RUN bash build_nachos.sh
WORKDIR /home
CMD bash
