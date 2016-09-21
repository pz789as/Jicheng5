/**
 * Sample React Native App
 * https://github.com/facebook/react-native
 * @flow
 */

'use strict'
import React, { Component } from 'react';
import { View } from 'react-native';
import { requireNativeComponent } from 'react-native';

class UnityView extends Component {
  setNativeProps(props){
    this.root.setNativeProps(props);
  }
  render() {
    return (
      <UnityViewNative
        {...this.props}
        style={[
          {backgroundColor: 'transparent'},
          this.props.style,
        ]} 
        ref={(r)=>{this.root = r}}
      />
    );
  }
}

UnityView.propTypes = {

};

const UnityViewNative = requireNativeComponent('RCTUnityView', UnityView);

export default UnityView;