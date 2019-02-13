/*******************************************************
*	GİRİLEN SAYILARIN HARMONİK ORTALAMASINI HESAPLAMA
*		Author: Hakan Eryücel
*******************************************************/
package harmonikortalama;
import java.util.Scanner;
public class HarmonikOrtalama {
    public static void main(String[] args) {
        Scanner scan= new Scanner(System.in);
        double mean=0.0,num=0.0;
        int n=0;
        do
        {
            System.out.println("Bir sayi giriniz, cikmak icin 0 giriniz : ");
            num=scan.nextInt();
            if(num!=0)
            {
                mean+=1.0/num;
                n++;
            }
        }
        while(num!=0);
        mean=(double)n/mean;
        System.out.println("Harmonik ortalama : "+mean);
    }
    
}
