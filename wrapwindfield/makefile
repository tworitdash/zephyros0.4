RELPAT = ../

all: settings clean wrapwindfield

include $(RELPAT)linux_compliation_settings.mk
LDFLAGS += -L/usr/local/lib	
wrapwindfield: $(DEPS)
	swig -python -outcurrentdir ../src/wrapwindfield.i
	$(CC) -o _wrapwindfield.so wrapwindfield_wrap.c $(DEPS) $(INC) $(CCFLAGS) $(LDFLAGS) -shared -fPIC
