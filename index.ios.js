/**
 * Sample React Native App
 * https://github.com/facebook/react-native
 * @flow
 */

import React, { Component } from 'react';
import {
  AppRegistry,
  StyleSheet,
  Text,
  View,
  TouchableOpacity,
} from 'react-native';

import Dimensions from 'Dimensions';
let ScreenWidth = Dimensions.get('window').width;
let ScreenHeight = Dimensions.get('window').height;

import UnityView from './UnityView';

class Jicheng5 extends Component {
  constructor(props){
    super(props);
    this.unityView = null;
    this.left = false;
    this.right = false;
    this.up = false;
    this.down = false;
    this.moveData = {
      left: this.left,
      right: this.right,
      up: this.up,
      down: this.down,
    };
  }
  render() {
    return (
      <View style={styles.container}>
        <Text style={styles.welcome}>
          Welcome to React Native!
        </Text>
        <Text style={styles.instructions}>
          To get started, edit index.ios.js
        </Text>
        <Text style={styles.instructions}>
          Press Cmd+R to reload,{'\n'}
          Cmd+D or shake for dev menu
        </Text>
        <UnityView ref={(r)=>{this.unityView = r}} 
          style={{width:300, height:200}}
          moveData={this.moveData}
          />
        <View style={{
          flexDirection:'row', 
          justifyContent: 'space-around', 
          width: ScreenWidth,
          marginTop: 10
        }}>
          <TouchableOpacity onPress={this.onMoveUp.bind(this)}>
            <Text style={styles.instructions}>
              上移动
            </Text>
          </TouchableOpacity>
        </View>
        <View style={{
          flexDirection:'row', 
          justifyContent: 'space-around', 
          width: ScreenWidth,
          marginTop: 10
        }}>
          <TouchableOpacity onPress={this.onMoveLeft.bind(this)}>
            <Text style={styles.instructions}>
              左移动
            </Text>
          </TouchableOpacity>
          <TouchableOpacity onPress={this.onMoveStop.bind(this)}>
            <Text style={styles.instructions}>
              停止移动
            </Text>
          </TouchableOpacity>
          <TouchableOpacity onPress={this.onMoveRight.bind(this)}>
            <Text style={styles.instructions}>
              右移动
            </Text>
          </TouchableOpacity>
        </View>
        <View style={{
          flexDirection:'row', 
          justifyContent: 'space-around', 
          width: ScreenWidth,
          marginTop: 10
        }}>
          <TouchableOpacity onPress={this.onMoveDown.bind(this)}>
            <Text style={styles.instructions}>
              下移动
            </Text>
          </TouchableOpacity>
        </View>
      </View>
    );
  }
  onMoveLeft(){
    this.left = !this.left;
    this.right = false;
    this.setMessage();
  }
  onMoveStop(){
    this.left = false;
    this.right = false;
    this.up = false;
    this.down = false;
    this.setMessage();
  }
  onMoveRight(){
    this.right = !this.right;
    this.left = false;
    this.setMessage();
  }
  onMoveUp(){
    this.up = !this.up;
    this.down = false;
    this.setMessage();
  }
  onMoveDown(){
    this.down = !this.down;
    this.up = false;
    this.setMessage();
  }
  setMessage(){
    this.moveData = {
      left: this.left,
      right: this.right,
      up: this.up,
      down: this.down,
    };
    if (this.unityView){
      this.unityView.setNativeProps({
        moveData: this.moveData
      }); 
    }
  }
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    justifyContent: 'center',
    alignItems: 'center',
    backgroundColor: '#F5FCFF',
  },
  welcome: {
    fontSize: 20,
    textAlign: 'center',
    margin: 10,
  },
  instructions: {
    textAlign: 'center',
    color: '#333333',
    marginBottom: 5,
  },
});

AppRegistry.registerComponent('Jicheng5', () => Jicheng5);
