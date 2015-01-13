# kafa_tutorial package

## Nodes

* /kafa_tutorial_publisher_node (roscpp)
  * publications : /kafa_tutorial_topic [kafa_tutorial/kafa_tutorial_msg]
  * subscriptions : None

* /kafa_tutorial_subscriber_node (rospy)
  * publications : None
  * subscriptions : /kafa_tutorial_topic [kafa_tutorial/kafa_tutorial_msg]

## Messages

* /kafa_tutorial_msg

```
  int32 data
```

## Node graph

![Image](img/rqt_graph.png?raw=true)
