/**
* count_words - Counts the number of words in a string
* @str: The input string
*
* Return: The number of words in the string
*/
int count_words(char *str)
{
int i, count = 0, len = strlen(str);
for (i = 0; i < len; i++)
{
if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
count++;
}
return count;
}
/**
* find_word_start - Finds the starting position of the next word in a string
* @str: The input string
* @pos: The current position in the string
*
* Return: The starting position of the next word,
* or -1 if there are no more words
*/
int find_word_start(char *str, int pos)
{
int i, len = strlen(str);
for (i = pos; i < len; i++)
{
if (str[i] != ' ')
return i;
}
return -1;
}
/**
* extract_word - Extracts the next word from a string
* @str: The input string
* @start: The starting position of the word
* 
* Return: A pointer to the extracted word, or NULL if there are no more words
*/
char *extract_word(char *str, int start)
{
    int i, len = strlen(str);
    char *word;

    for (i = start; i < len; i++)
    {
        if (str[i] == ' ')
            break;
    }

    word = malloc(sizeof(char) * (i - start + 1));
    if (word == NULL)
        return NULL;

    strncpy(word, &str[start], i - start);
    word[i - start] = '\0';

    return word;
}

/**
 * strtow - Splits a string into words
 * @str: The input string
 *
 * Return: An array of strings (words), or NULL if the function fails
 */
char **strtow(char *str)
{
    int i, word_count, word_start, word_index = 0;
    char **words;

    if (str == NULL || *str == '\0')
        return NULL;

    word_count = count_words(str);
    words = malloc(sizeof(char *) * (word_count + 1));
    if (words == NULL)
        return NULL;

    word_start = find_word_start(str, 0);
    while (word_start != -1)
    {
        words[word_index++] = extract_word(str, word_start);
        if (word_index > word_count)
            break;
        word_start = find_word_start(str, word_start + strlen(words[word_index - 1]));
    }

    words[word_index] = NULL;

    return words;
}

