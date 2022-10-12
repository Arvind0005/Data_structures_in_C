class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        List<List<String>> res = new ArrayList<>();
        HashMap<String,List<String>> map = new HashMap();
        for(String str :strs)
        {
            char hash[] = new char[26];
            for(char ch : str.toCharArray())
            {
                hash[ch-'a']++;
            }
            String key = new String(hash);
            map.computeIfAbsent(key,k -> new ArrayList<>());
            map.get(key).add(str);
        }
        res.addAll(map.values());
        return res;
    }
}
