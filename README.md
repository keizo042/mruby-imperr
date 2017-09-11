mruby-implerr
====


## Descriotion
ImplementationError class

if you have working in progress mrbgems,  
you can throw the exception in not well-considered procedure.  
in specific, internal procedure which you wouldn't like to show external env.  

e.g.   
- converting Ruby class to corresponding c structure,
- missunderstanding format codec error
etcetc



## sample

```ruby
ret = do_something_internal_procedure()
if ret.nil?
  raise ImplementationError
end
```

see other `examples/*`

## Requirement
mruby 1.3 or later

## Install

add your build_config.rb

```
  conf.gem "keizo042/mruby-imperr"
```

## TODO

- export `E_IMP_ERROR` macro in c 

now `mrbgem/include` is not exported.  
According to  `mruby/doc/guides/mrbgems.md`,
it will be exported. I'm waitting.  

## LICENSE
MITL

## AUTHOR

[keizo](https://github.com/keizo042)


## Contact me
twitter : @keizo042
mail: keizo.bookman at gmail.com  
