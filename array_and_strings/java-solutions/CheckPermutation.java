public class CheckPermutation {

    public static void main(String[] args) {

        System.out.println("Cracking The Coding Interview Problem 1.2");
        String str1 = "abc";
        String str2 = "bcda";
        System.out.println("Given Strings '"+str1+"' and '"+ str2 + "' are Permutations :-> " + (checkPermutatuion(str1, str2) ? "Yes" : "No"));

    }

    public static boolean checkPermutatuion(String str1, String str2){

        if(str1.length() != str2.length())
            return false;

        int[] letters = new int[128];

        for(char c : str1.toCharArray()){
            letters[c]++;
        }

        for(char c: str2.toCharArray()) {
            letters[c]++;
            if(letters[c] == 1){
                return false;
            }
        }

        return true;
    }
}



