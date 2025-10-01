//
/*pattern
*  
**
***
****      *
************
****      *
*** 
**
*
*/
public class Pattern {
    public static void main(String[] args) {
        int n = 5;

        // First loop
        for (int i = 0; i < n - 2; i++) {
            for (int j = 0; j < i + 1; j++) {
                System.out.print("*");
            }
            System.out.println();
        }

        // Print middle part
        System.out.print("*".repeat(n - 1));
        System.out.print(" ".repeat(n + 1));
        System.out.println("*");

        System.out.println("*".repeat(2 * n + 2));

        System.out.print("*".repeat(n - 1));
        System.out.print(" ".repeat(n + 1));
        System.out.println("*");

        // Last loop
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i - 2; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
