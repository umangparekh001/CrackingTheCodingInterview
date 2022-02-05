public class IsUnique {

    public static void main(String[] args) {

        System.out.println("Cracking The Coding Interview Problem 1.1");
        System.out.println(uniqueCharString("abcd12"));

    }

    public static boolean uniqueCharString(String uniqueCharStr){
        System.out.println("String to be validated :->> "+uniqueCharStr);
        if(uniqueCharStr.length() > 128)
            return false;

        boolean[] charSet = new boolean[128];

        for(int i=0; i<uniqueCharStr.length(); i++){
            int val = uniqueCharStr.charAt(i);
            if(charSet[val]){
                return false;
            }
            charSet[val] = true;
        }

        return false;
    }
}
