FROM alpine
RUN apk add --update build-base
COPY main.cpp /usr/src/app/
RUN cd /usr/src/app/ && g++ -std=c++11 main.cpp -o n-th_longest
CMD ["/usr/src/app/n-th_longest"]
