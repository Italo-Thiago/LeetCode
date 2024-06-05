Console.Clear();

Console.WriteLine("Merge String Alternately Program");
Console.WriteLine("Write the first letter");
string word1 = Console.ReadLine();

Console.WriteLine("Write the second letter");
string word2 = Console.ReadLine();

Console.WriteLine($"Result is {MergeAlternately(word1, word2)}");

string MergeAlternately(string word1, string word2)
{
    int m = word1.Length;
    int n = word2.Length;   
    string result = "";

    int i = 0;
    int j = 0;

    while (i < m || j < n)
    {
        if (i < m )
        {
            result += word1[i];
            i++;
        }
        if (j < n)
        {
            result += word2[j];
            j++;
        }
    }
    return result;
}


