import java.io.IOException;
import java.util.Scanner;
import java.math.BigInteger;
 
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Main {
 
    public static void main(String[] args) throws IOException {
            long cont;
            int qnt;
            Scanner ler = new Scanner(System.in);
            BigInteger pl = new BigInteger("1111111111111111111133333");
            qnt = ler.nextInt();
            while(qnt != 0){
            cont = 0;
            pl = ler.nextBigInteger();
            String binario = pl.toString(2);
            for(int i=0;i<binario.length();++i){
                if(binario.charAt(i)=='1')
                    ++cont;
            }
            System.out.println(cont);
            --qnt;
            }
    }
 
}
