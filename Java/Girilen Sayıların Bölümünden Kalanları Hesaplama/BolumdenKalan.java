/*******************************************************
*	GİRİLEN SAYILARIN BÖLÜMDEN KALANLARINI HESAPLAMA
*		Author: Hakan Eryücel
*******************************************************/
package bolumdenkalan;
import java.util.Scanner;
public class BolumdenKalan {
    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);
        int num,mod,n=0;
        do
        {
            System.out.println("Mod alinacak sayiyi giriniz,cikmak icin 0 giriniz. ");
            num = scan.nextInt();
            if(num==0)
            {
                continue;
            }
            System.out.println("Mod degerini giriniz : ");
            mod= scan.nextInt();
            System.out.println(num+"mod"+mod+" : "+num%mod);
        }
        while(num!=0);
    }
    
}
