﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/GetLowLatencyHlsManifestConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mediapackagev2
{
namespace Model
{

GetLowLatencyHlsManifestConfiguration::GetLowLatencyHlsManifestConfiguration() : 
    m_manifestNameHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_childManifestNameHasBeenSet(false),
    m_manifestWindowSeconds(0),
    m_manifestWindowSecondsHasBeenSet(false),
    m_programDateTimeIntervalSeconds(0),
    m_programDateTimeIntervalSecondsHasBeenSet(false),
    m_scteHlsHasBeenSet(false)
{
}

GetLowLatencyHlsManifestConfiguration::GetLowLatencyHlsManifestConfiguration(JsonView jsonValue) : 
    m_manifestNameHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_childManifestNameHasBeenSet(false),
    m_manifestWindowSeconds(0),
    m_manifestWindowSecondsHasBeenSet(false),
    m_programDateTimeIntervalSeconds(0),
    m_programDateTimeIntervalSecondsHasBeenSet(false),
    m_scteHlsHasBeenSet(false)
{
  *this = jsonValue;
}

GetLowLatencyHlsManifestConfiguration& GetLowLatencyHlsManifestConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ManifestName"))
  {
    m_manifestName = jsonValue.GetString("ManifestName");

    m_manifestNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Url"))
  {
    m_url = jsonValue.GetString("Url");

    m_urlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChildManifestName"))
  {
    m_childManifestName = jsonValue.GetString("ChildManifestName");

    m_childManifestNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ManifestWindowSeconds"))
  {
    m_manifestWindowSeconds = jsonValue.GetInteger("ManifestWindowSeconds");

    m_manifestWindowSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProgramDateTimeIntervalSeconds"))
  {
    m_programDateTimeIntervalSeconds = jsonValue.GetInteger("ProgramDateTimeIntervalSeconds");

    m_programDateTimeIntervalSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScteHls"))
  {
    m_scteHls = jsonValue.GetObject("ScteHls");

    m_scteHlsHasBeenSet = true;
  }

  return *this;
}

JsonValue GetLowLatencyHlsManifestConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_manifestNameHasBeenSet)
  {
   payload.WithString("ManifestName", m_manifestName);

  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("Url", m_url);

  }

  if(m_childManifestNameHasBeenSet)
  {
   payload.WithString("ChildManifestName", m_childManifestName);

  }

  if(m_manifestWindowSecondsHasBeenSet)
  {
   payload.WithInteger("ManifestWindowSeconds", m_manifestWindowSeconds);

  }

  if(m_programDateTimeIntervalSecondsHasBeenSet)
  {
   payload.WithInteger("ProgramDateTimeIntervalSeconds", m_programDateTimeIntervalSeconds);

  }

  if(m_scteHlsHasBeenSet)
  {
   payload.WithObject("ScteHls", m_scteHls.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
