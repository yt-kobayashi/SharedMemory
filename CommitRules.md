# Commit Comment Rules
## 1. General Format
### 1.1 Format
```
[COMMIT TYPE] Change description (Title, Overview, etc...)  
  
Reason for change  
    :  
    :  
    :  
```

|Caption|Description|
|---|---|
|COMMIT TYPE|Read "1.2 Commit Type"|
|Change description|Simple explanation|
|Reason for Change|Detailed explanation|
  
1st line is "COMMIT TYPE" and "Change description".  
Read "1.2 Commit Type" for "COMMIT TYPE".  
2nd line is empty line.  
3rd and subsequent lines are reason for change.  
Explain in more detail than the 1st line.  

### 1.2 Commit Type
|Type|Description|Example|
|---|---|---|
|FIX|Bug fixes|[FIX]|
|ADD|Add new file or function|[ADD]|
|UPDATE|Update function|[UPDATE]|
|CLEAN|Refactoring etc...|[CLEAN]|
|DISABLE|Comment out etc...|[DISABLE]|
|DEL|Delete fle or function|[DEL]|
|REVERT|Cancel change|[REVERT]|

The type is Expressions enclosed in brackets "[]".

[Example]
~~~
[ADD] Add new file "Sample.md"

Add a sample file about commit example.
It's empty file.
~~~

## 2. References
[Gitのコミットメッセージの書き方](https://qiita.com/itosho/items/9565c6ad2ffc24c09364)