# Flags
INC      = -I./inc -I./snp 
LIB      = 
LIBS     = 
DEFFLAGS = -O2 -g -Wall -Wextra  ${INC}

# directories
OBJ     = ./obj
BIN     = ./bin

#binary info
NAME    = libmfract
VERSION = 1.0
LIBOUT = ${BIN}/${NAME}.a


# presets
OUT = ${BIN}/${NAME}
# test out ${NAME}-${VER}_test
CC  = cc


# build test
all: message ${OUT}
	printf "\x1b[1;32m━━━SUCCESS━━━┛ Test Build\x1b[0m\n"

# build release
build: message clean_part ${LIBOUT}
	printf "\x1b[1;32m━━━SUCCESS━━━┛ \x1b[39mRelease Build\x1b[0m\n"

# clean section
clean_part:
	rm ${BIN}/* ${OBJ}/* -f
	printf "\x1b[1;35m━━━CLEANED━━━┫\x1b[0m\n"

# clean
clean: message clean_part
	printf "\x1b[1;32m━━━SUCCESS━━━┛\x1b[0m\n"


# generate new makefile
gen: message clean_part
	printf "\x1b[1;39m━━━━━━━━━━━━━┛\x1b[0m\n\n"

	hd -n libmfract -v 1.0 -m makefile -b ./bin -o ./obj -S  -s ./src -i ./inc -i ./snp -f -O2 -f -g -f -Wall -f -Wextra -T ./src/main.c
	printf "\x1b[1;32m\n━━━━━━━━━━━━━┓\nSUCCESS      ┃  \x1b[39mCreate new\x1b[35m MakeFile \x1b[32m\n━━━━━━━━━━━━━┛\x1b[0m\n"

# print settings
message:
	printf "\x1b[1;35m%s \x1b[39mV%s\n" ${NAME} ${VERSION}
	printf "\x1b[1;39mMakefile generated from \x1b[35mHD\x1b[39m\n"
	printf "\x1b[39m ━ \x1b[1;39mUnder the \x1b[32mMimik License 1.0\n"
	printf "\x1b[39m ━ \x1b[1;32mCopyright (c) 2022 Noah Arcouette\x1b[0m  ┃\n"
	printf "\x1b[39m━━━━━━━━━━━━━┳━━━━━━━━━━━━━━━━━━━━━━━━┛\n"

ifndef VERBOSE
.SILENT:
endif

${OBJ}/oludom.o: ./src/modulo.c ./inc/mfract.h 
	printf "\x1b[1;39m━━━━━━━━━━━━━┫\n\x1b[35mFILE         \x1b[39m┃  \x1b[39m %s\x1b[39m\n━━━━━━━━━━━━━┫\x1b[0m\n" ./src/modulo.c
	${CC} -c ${DEFFLAGS} ${CFLAGS} -o ${OBJ}/oludom.o ./src/modulo.c

${OBJ}/noitcartbus.o: ./src/subtraction.c ./inc/mfract.h 
	printf "\x1b[1;39m━━━━━━━━━━━━━┫\n\x1b[35mFILE         \x1b[39m┃  \x1b[39m %s\x1b[39m\n━━━━━━━━━━━━━┫\x1b[0m\n" ./src/subtraction.c
	${CC} -c ${DEFFLAGS} ${CFLAGS} -o ${OBJ}/noitcartbus.o ./src/subtraction.c

${OBJ}/trevnoc.o: ./src/convert.c ./inc/mfract.h 
	printf "\x1b[1;39m━━━━━━━━━━━━━┫\n\x1b[35mFILE         \x1b[39m┃  \x1b[39m %s\x1b[39m\n━━━━━━━━━━━━━┫\x1b[0m\n" ./src/convert.c
	${CC} -c ${DEFFLAGS} ${CFLAGS} -o ${OBJ}/trevnoc.o ./src/convert.c

${OBJ}/noitacilpitlum.o: ./src/multiplication.c ./inc/mfract.h 
	printf "\x1b[1;39m━━━━━━━━━━━━━┫\n\x1b[35mFILE         \x1b[39m┃  \x1b[39m %s\x1b[39m\n━━━━━━━━━━━━━┫\x1b[0m\n" ./src/multiplication.c
	${CC} -c ${DEFFLAGS} ${CFLAGS} -o ${OBJ}/noitacilpitlum.o ./src/multiplication.c

${OBJ}/yfilpmis.o: ./src/simplify.c ./inc/mfract.h 
	printf "\x1b[1;39m━━━━━━━━━━━━━┫\n\x1b[35mFILE         \x1b[39m┃  \x1b[39m %s\x1b[39m\n━━━━━━━━━━━━━┫\x1b[0m\n" ./src/simplify.c
	${CC} -c ${DEFFLAGS} ${CFLAGS} -o ${OBJ}/yfilpmis.o ./src/simplify.c

${OBJ}/noitidda.o: ./src/addition.c ./inc/mfract.h 
	printf "\x1b[1;39m━━━━━━━━━━━━━┫\n\x1b[35mFILE         \x1b[39m┃  \x1b[39m %s\x1b[39m\n━━━━━━━━━━━━━┫\x1b[0m\n" ./src/addition.c
	${CC} -c ${DEFFLAGS} ${CFLAGS} -o ${OBJ}/noitidda.o ./src/addition.c

${OBJ}/noisivid.o: ./src/division.c ./inc/mfract.h 
	printf "\x1b[1;39m━━━━━━━━━━━━━┫\n\x1b[35mFILE         \x1b[39m┃  \x1b[39m %s\x1b[39m\n━━━━━━━━━━━━━┫\x1b[0m\n" ./src/division.c
	${CC} -c ${DEFFLAGS} ${CFLAGS} -o ${OBJ}/noisivid.o ./src/division.c

${OBJ}/niam.o: ./src/main.c ./inc/mfract.h 
	printf "\x1b[1;39m━━━━━━━━━━━━━┫\n\x1b[35mFILE         \x1b[39m┃  \x1b[39m %s\x1b[39m\n━━━━━━━━━━━━━┫\x1b[0m\n" ./src/main.c
	${CC} -c ${DEFFLAGS} ${CFLAGS} -o ${OBJ}/niam.o ./src/main.c

${OUT}: ${OBJ}/oludom.o ${OBJ}/noitcartbus.o ${OBJ}/trevnoc.o ${OBJ}/noitacilpitlum.o ${OBJ}/yfilpmis.o ${OBJ}/noitidda.o ${OBJ}/noisivid.o ${OBJ}/niam.o
	${CC} ${CFLAGS} ${DEFFLAGS} ${LIB} -o ${OUT} ${OBJ}/oludom.o ${OBJ}/noitcartbus.o ${OBJ}/trevnoc.o ${OBJ}/noitacilpitlum.o ${OBJ}/yfilpmis.o ${OBJ}/noitidda.o ${OBJ}/noisivid.o ${OBJ}/niam.o ${LIBS}

${LIBOUT}: ${OBJ}/oludom.o ${OBJ}/noitcartbus.o ${OBJ}/trevnoc.o ${OBJ}/noitacilpitlum.o ${OBJ}/yfilpmis.o ${OBJ}/noitidda.o ${OBJ}/noisivid.o
	ar rcs ${LIBOUT} ${OBJ}/oludom.o ${OBJ}/noitcartbus.o ${OBJ}/trevnoc.o ${OBJ}/noitacilpitlum.o ${OBJ}/yfilpmis.o ${OBJ}/noitidda.o ${OBJ}/noisivid.o
