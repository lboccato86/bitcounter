/* Contador de bits
 *
 * Este programa conta o numero de bits em um byte
 */

#include <stdio.h>

int main() {

  unsigned char entrada;
  unsigned int tmp;
  unsigned int n_bits,i = 0;

  /* Ler entrada em hexadecimal */
  scanf("%x", &tmp);
  entrada = (unsigned char) tmp;


  n_bits = 0;

  /* Contabiliza o numero de bits iguais a 1 presentes na cadeia binaria em entrada (8 bits) */
  do {
	
	n_bits = n_bits + (unsigned int) (entrada & 0x01);
	entrada = entrada >> 1;
	i = i + 1;	

  } while (i < 8);

  /* Escrever numero de bits */
  printf("%d\n", n_bits);
  return 0;

}
