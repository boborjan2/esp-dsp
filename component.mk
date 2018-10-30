COMPONENT_ADD_INCLUDEDIRS := modules/dotprod/include \
							modules/support/include \
							modules/windows/Barrel/include \
							modules/iir/include \
							modules/matrix/include \
							modules/common/include 

COMPONENT_SRCDIRS :=. \
					modules/common \
					modules/misc \
					modules/dotprod \
					modules/dotprod/float \
					modules/dotprod/fixed \
					modules/matrix \
					modules/matrix/float \
					modules/matrix/fixed \
					modules/support \
					modules/support/fft \
					modules/support/snr \
					modules/support/sfdr \
					modules/windows/Barrel \
					modules/windows/Barrel/float \
					modules/windows/Barrel/fixed \
					modules/iir \
					modules/iir/biquad 
					
COMPONENT_PRIV_INCLUDEDIRS := 	modules/dotprod/float \
								modules/dotprod/fixed				
					
#COMPONENT_ADD_LDFLAGS = -g -O2 -c -fverbose-asm
#-Wl,--whole-archive -l$(COMPONENT_NAME) -Wl,--no-whole-archive
