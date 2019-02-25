/*******************************************************
*	KLAVYEDEN ALINAN SAYILARI BİR DİZİYE AKTARMA
*		Author: Hakan Eryücel
*******************************************************/
package diziaktarma;
import java.util.Scanner;
public class DiziAktarma {
    public static void main(String[] args) {
        Scanner scan= new Scanner(System.in);
       int []Dizi =new int [10];
       for(int i=0;i<10;i++)
       {
        System.out.println((i+1)+". sayiyi giriniz : "); 
        Dizi[i]=scan.nextInt();
       }
    }
}
