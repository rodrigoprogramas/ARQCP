/*
    1231578: Rodrigo Marques Rodrigues: 2DF : version A
*/

int low_pressure(unsigned int * x){
    unsigned char *bytes = (unsigned char*) x;
    for(unsigned int i = 0; i < sizeof(unsigned int) ; i++){
        if (bytes[i] < 0xFE){
            return 1;
        }
    }
    return 0;
}