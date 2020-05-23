FROM centos:centos7

MAINTAINER liushan <ls1229344939@163.com>

RUN mkdir /usr/yunjisuan
WORKDIR /usr/yunjisuan
COPY ./helloworld.c .

RUN yum install -y gcc && gcc helloworld.c -o helloworld

CMD ["./helloworld"]