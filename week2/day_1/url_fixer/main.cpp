#include <iostream>
#include <string>

int main()
{
    std::string url("https//www.reddit.com/r/nevertellmethebots");
    url.insert(5, ":");
    url.replace(39,4, "odds");
    // Accidentally I got the wrong URL for a funny subreddit. It's probably "odds" and not "bots"
    // Also, the URL is missing a crucial component, find out what it is and insert it too!

    std::cout << url << std::endl;
    return 0;
}