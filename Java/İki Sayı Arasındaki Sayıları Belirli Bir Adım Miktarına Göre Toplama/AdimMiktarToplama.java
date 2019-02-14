/*******************************************************
*	GİRİLEN ARALIKTA ADIM ATLAYARAK TOPLAMA
*		Author: Hakan Eryücel
*******************************************************/
package adimmiktartoplama;
import java.util.Scanner;
public class AdimMiktarToplama {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int start,finish,step,sum=0;
        System.out.println("Baslangic, bitis ve adim degerlerini sirasi ile giriniz : ");
        start=scan.nextInt();
        finish=scan.nextInt();
        step=scan.nextInt();
        for(int i=start;i<=finish;i+=step)
        {
            sum+=i;
        }
        System.out.println("Sonuc : "+sum);
    }
}
