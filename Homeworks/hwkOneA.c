/*My thought process:
    Read text file for more info.
*/

long int hwkOneA (long int x, int n, int m) {
    /*First*/
    long int b1 = (x >> (15 - n) + (15 - n) + (15 - n) + (15 - n)) &0xF;
    //printf("%x\n", b1);
    long int b2 = (x >> (15 - m) + (15 - m) + (15 - m) + (15 - m)) &0xF;
    //printf("%x\n", b2);
    long int b = (b1 ^ b2);

    /*Second*/
    b = (b << (15- n) + (15 - n) + (15 - n) + (15 - n)) | (b << (15 - m) + (15 - m) + (15 - m) + (15 - m));

    /*Third*/
    long int result = x ^ b;
    return result;
}
