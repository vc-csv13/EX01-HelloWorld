FROM ubuntu:latest

RUN apt-get update && apt-get install -y openssh-server cmake clang gdb rsync
RUN mkdir /var/run/sshd
RUN useradd -m -d /home/csv13-student csv13-student
RUN echo 'csv13-student:vscilab01' | chpasswd

COPY .docker/ssh /etc/ssh
RUN chmod 0600 /etc/ssh/ssh*_key

# SSH login fix. Otherwise user is kicked off after login
RUN sed 's@session\s*required\s*pam_loginuid.so@session optional pam_loginuid.so@g' -i /etc/pam.d/sshd

ENV NOTVISIBLE "in users profile"
RUN echo "export VISIBLE=now" >> /etc/profile

EXPOSE 22
CMD ["/usr/sbin/sshd", "-D"]