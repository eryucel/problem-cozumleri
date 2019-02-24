/**************************************************************
*	RECURSION YÖNTEMİ İLE BİR FİBONACCİ TERİMİNİ HESAPLAMA
*		Author: Hakan Eryücel
***************************************************************/
package recursionfibonacci;
import java.util.Scanner;
public class RecursionFibonacci {
    static int fibonacci(int n)
    {
        if(n==2||n==1)
        {
            return 1;
        }
        else
        {
            return fibonacci(n-1)+fibonacci(n-2);
        }
    }
    
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n;
        System.out.println("Sira sayisini(n) giriniz : ");
        n=scan.nextInt();
        System.out.println("Sonuc : "+fibonacci(n));
    }
}