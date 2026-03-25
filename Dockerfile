FROM ubuntu:22.04

RUN apt update && apt install -y libc6

COPY maxfinder.deb /tmp/

RUN dpkg -i /tmp/maxfinder.deb

CMD ["/usr/bin/maxfinder"]
