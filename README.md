# Magic Search 
Pretty straightforward, this small program used to allow you to use the magic of Google's "Feeling Lucky" button from the CLI.
However due to Google introducing new URL parameters it's impossible to make it work properly. So, I switched to duckduckgo and it works again.
Currently it's only available on Windows, when I figure out a proper way to create it on Linux I'll release Linux version too.

You can either get it from [releases](https://github.com/tkduman/magic-search/releases) or you can build it on your own.

## But why?

Why not? Let's be real, most of the time what we search for is in the first result. No need to waste our time by looking at other links or opening 8 links in 8 tabs just to close them back without looking them. Magic makes it easy for you, also clicks that button that you have avoided for your entire life.

On some results if DuckDuckGo thinks that first result isn't the best, it launches the search page instead, so you can choose on your own. Which is very neat. See *Here's a few examples* section for some behavioural examples and how it results.

## How does it work?

When you type the command, such as:

```console
magic How to open regedit?
```

Magic reads "How to open regedit?" part and properly submits it to DuckDuckGo via your default browser, meanwhile also clicks the *"Feeling Lucky"* button for you, which brings you the best result. *(almost always)*

I'm using Microsoft Edge (chromium based), it opens a new tab and makes the lucky visit in the new tab. Saves you from opening a new tab, typing whatever you need and clicking through bunch of results.

For example the query above has opened [https://support.microsoft.com/en-gb/help/4027573/windows-open-registry-editor-in-windows-10](https://support.microsoft.com/en-gb/help/4027573/windows-open-registry-editor-in-windows-10) in a new tab for me within an interval of a blink. Which is the best solution, really.

Give it a go, you won't regret it.

## Building on Windows
* You don't need any extra libraries. We will use default features of Windows.
* Build it in Visual Studio or your favourite environment.
* Rename the executable as *magic* or whatever you like to.
* Add the folder of the executable to your path.
* Done!

You can now restart your PowerShell or command prompt and start using the *"Feeling Lucky"* instantly.

## Here's a few examples
```
C:\Users\kaan>magic ‘system’ was not declared in this scope
This opens "https://stackoverflow.com/questions/3885901/system-not-declared-in-scope" for me, which is the perfect result.

C:\Users\kaan>magic Bad Gateway
This opens "https://www.lifewire.com/502-bad-gateway-error-explained-2622939" for me, which is informative.

C:\Users\kaan>magic ubuntu change default browser
This opens "https://askubuntu.com/questions/79305/how-do-i-change-my-default-browser" for me, which provides multiple solutions.
```

With the results you'll be left satisfied almost always. Again, I'm sorry that Linux version doesn't exist but if I don't forget I'll make it real. (In fact I can make it function almost the same, but it has flaws.)

## Is something wrong?
Open an issue, I'll try to fix it or help you with your problem. Do you know the solution already? Amazing, go ahead and submit a request.

Have fun.
