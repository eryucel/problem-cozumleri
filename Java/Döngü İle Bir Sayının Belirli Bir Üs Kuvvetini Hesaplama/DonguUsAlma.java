/*******************************************************
*	DONGU KULLANARAK GİRİLEN SAYININ KUVVETİNİ ALMA
*		Author: Hakan Eryücel
*******************************************************/
package donguusalma;
import java.util.Scanner;
public class DonguUsAlma {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int taban,kuvvet,sonuc=1;
        System.out.println("Taban ve kuvvet degerlerini sirasi ile giriniz : ");
        taban=scan.nextInt();
        kuvvet=scan.nextInt();
        for(int i=1;i<=kuvvet;i++)
        {
            sonuc*=taban;
        }
        System.out.println("Sonuc : "+sonuc);
    }
}
