FROM ubuntu

RUN apt-get update && apt-get -y upgrade && apt-get -y install file
RUN groupadd -g 993 kojibuilder && useradd -g kojibuilder -u 994 -m kojibuilder

WORKDIR	/home/kojibuilder/
ADD perm-puzzle.tar .
WORKDIR perm-puzzle
USER kojibuilder
