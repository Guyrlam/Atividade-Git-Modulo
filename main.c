#include <stdlib.h>
#include "matematica.h"

int main()
{
    float angulo_radianos = 1.047; // Ângulo em radianos

    printf("seno de %f = %f\n", angulo_radianos, calcular_seno(angulo_radianos));
    printf("cossseno de %f = %f\n", angulo_radianos, calcular_cosseno(angulo_radianos));
    printf("tangente de %f = %f", angulo_radianos, calcular_tangente(angulo_radianos));

    return 0;
}