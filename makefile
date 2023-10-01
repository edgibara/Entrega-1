
all: *.c

%.o: %.c
	gcc $*.c -c $@ -lm
%: %.o
	gcc $*.o -o $@ -lm
clean: *.o
	rm *.o
sshgit:
	ssh-keygen -t rsa -C "edgibara@usp.br"
	ssh-add ~/.ssh/id_rsa
begin:
	git init
	git branch -m main
send: # .gitignore precisa ser feito antes
	git add --all
rmrepo:
	rm -fr .git
	git status
>>>>>>> origin

