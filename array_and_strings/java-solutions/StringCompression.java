public class StringCompression {

    public static void main(String[] args) {

        System.out.println("===== Cracking The Coding Interview Problem 1.6 =====");
        System.out.println("Implement a method to perform basic string compression using the counts\n" +
                "of repeated characters. For example, the string aabcccccaaa would become a2blc5a3. If the\n" +
                "\"compressed\" string would not become smaller than the original string, your method should return\n" +
                "the original string. You can assume the string has only uppercase and lowercase letters (a - z).");
        System.out.println("=====================================================");
        String str = "aabcccccaaa";
        System.out.println("Given String to compress :-> " + str );
        System.out.println("****** Compressed String is :-> " + stringCompression(str) + " *******");

    }

    public static String stringCompression(String str) {

        compresssStrCount(str);
        StringBuilder compressedStr = new StringBuilder();
        int consecutiveCharCount = 0;

        for(int i=0; i<str.length(); i++) {
            consecutiveCharCount++;

            if(i+1 >= str.length() || str.charAt(i) != str.charAt(i+1)) {
                compressedStr.append(str.charAt(i));
                compressedStr.append(consecutiveCharCount);
                consecutiveCharCount = 0;
            }

        }

        System.out.println("Compressed Str :->> "+compressedStr);
        return compressedStr.length() > str.length() ? str : compressedStr.toString();
    }

    public static int compresssStrCount(String str) {
        int consecutiveCharCount = 0;
        int compressedStrLength = 0;

        for(int i=0; i<str.length(); i++) {
            consecutiveCharCount++;

            if(i+1 >= str.length() || str.charAt(i) != str.charAt(i+1)) {
                compressedStrLength += 1 + consecutiveCharCount;
                consecutiveCharCount = 0;
            }

        }

        System.out.println(" compressedStrLength :->> "+compressedStrLength);
        return compressedStrLength;
    }
}
