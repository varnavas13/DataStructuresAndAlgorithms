import java.util.HashMap;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        try {
            Scanner scanner = new Scanner(System.in);

            int n = Integer.parseInt(scanner.nextLine());

            HashMap<String, Integer> map = new HashMap<>();

            for (int i = 0; i < n; i++) {
                String s = scanner.nextLine();
                int x = Integer.parseInt(scanner.nextLine());
                map.put(s, x);
            }

            for (int i = 0; i < n; i++) {
                String s = scanner.nextLine();
                if (map.containsKey(s)) {
                    System.out.println(s + "=" + map.get(s));
                } else {
                    System.out.println("Not found");
                }
            }
        } catch (Exception e) {
            System.err.println("Error: " + e.getMessage());
        }
    }
}
