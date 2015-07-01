(function() {

  defineClass("JPTestContainer", {/*
  	newEmptyArray : function()
  	{
  		return require('NSArray').alloc().init();
  	},
  	newArray : function()
  	{
  		return require('NSArray').alloc().initWithArray(["test"]);
  	},
  	getObjectWithJS_index : function(arr, index)
  	{
  		var rawArr = arr.toJS();
  		return rawArr[index];
  	},*/
  	getObjectWithOC_index : function(arr, index)
  	{
  		return arr.objectAtIndex(index);
  	},
  })

})();