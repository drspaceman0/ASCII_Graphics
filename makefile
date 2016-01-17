
OBJS = drawAArt.o initAArt.o lineabs.o linerel.o point.o circle.o rect.o checkerrors.o 
CC = gcc -c


exe: main.o ASCIILibrary.a ${OBJS}
	gcc -o exe main.o ASCIILibrary.a

ASCIILibrary.a: ${OBJS}
	ar rvs ASCIILibrary.a ${OBJS}

main.o: main.c 
	${CC} main.c 

drawAArt.o: drawAArt.c drawAArt.h
	${CC} drawAArt.c drawAArt.h

initAArt.o: initAArt.c initAArt.h
	${CC} initAArt.c initAArt.h

lineabs.o: lineabs.c lineabs.h
	${CC} lineabs.c lineabs.h

linerel.o: linerel.c linerel.h
	${CC} linerel.c linerel.h

circle.o: circle.c circle.h
	${CC} circle.c circle.h

rect.o: rect.c rect.h
	${CC} rect.c rect.h

point.o: point.c point.h
	${CC} point.c point.h

outofbounds.o: checkerrors.c checkerrors.h
	${CC} checkerrors.c checkerrors.h

clean: 
	rm -f *.o *.gch *~ exe ASCIILibrary.a