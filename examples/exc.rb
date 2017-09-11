
# get Result as sure
def do_something_internally()
  return nil
end


ret = do_something_internally()
if ret.nil?
  raise ImplementationError
end
