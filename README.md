# Magic Search 
Pretty straightforward, this small program allows you to use the magic of Google's "Feeling Lucky" button from the CLI.
Currently it's only available on Windows, when I figure out a proper way to create it on Linux I'll release Linux version too.

You can either get it from [releases]() or you can build it on your own.

## But why?

Why not? Let's be real, most of the time what we search for is in the first result. No need to waste our time by looking at other links or opening 8 links in 8 tabs. Magic does it for you, also clicks that button that you have avoided for your entire life.

Also on some results if Google thinks that first result isn't the best, it launches the search page instead, so you can choose on your own. Which is very neat. See *Here's a few examples* section for some behavioural examples and how it results.

## How does it work?

When you type the command, such as:

```console
magic How to open regedit?
```

Magic reads "How to open regedit?" part and properly submits it to Google via your default browser, meanwhile also clicks the *"Feeling Lucky"* button for you, which brings you the best result. *(almost always)*

I'm using Google Chrome, it opens a new tab and makes the lucky visit in the new tab. Saves you from opening a new tab, typing whatever you need and clicking through bunch of results.

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
This opens "a Google search page" for me, since Google didn't think that there was a good solution.

C:\Users\kaan>magic Bad Gateway
This opens "https://www.keycdn.com/support/502-bad-gateway" for me, which is informative.

C:\Users\kaan>magic ubuntu change default browser
This opens "https://help.ubuntu.com/stable/ubuntu-help/net-default-browser.html.en" for me, which is the exact answer that I'm looking for.
```

With the results you'll be left satisfied almost always. Again, I'm sorry that Linux version doesn't exist but if I don't forget I'll make it real. (In fact I can make it function almost the same, but it has flaws.)
