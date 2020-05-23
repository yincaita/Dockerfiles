FROM centos:centos7

MAINTAINER liushan <ls1229344939@163.com>

RUN mkdir /usr/yunjisuan
WORKDIR /usr/yunjisuan
ADD https://github.com/yincaita/Dockerfiles/blob/master/yunjisuan/helloworld.c .

RUN yum install -y gcc && gcc helloworld.c -o helloworld

ENV PATH /usr/yunjisuan:$PATH

ENTRYPOINT ["./helloworld"]